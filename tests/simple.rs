#[test]
fn test_number() {
    let res = fminus::interpret_str("1")
        .expect("expected something")
        .number()
        .expect("expected a number");
    assert_eq!(res, 1);
}

#[test]
fn test_string() {
    let value = fminus::interpret_str("'hello'").expect("expected something");
    assert_eq!(value.string().expect("expected a string"), "hello");
}

#[test]
fn test_bool() {
    let value = fminus::interpret_str("true").expect("expected something");
    assert_eq!(value.boolean().expect("expected a bool"), true);

    let value = fminus::interpret_str("false").expect("expected something");
    assert_eq!(value.boolean().expect("expected a bool"), false);
}

#[test]
fn test_list() {
    let value = fminus::interpret_str("[1, '2', [false, true]]").expect("expected something");
    let res = value.list().expect("expected a list");
    assert_eq!(res.len(), 3);
    assert_eq!(
        res[0].lock().unwrap().number().expect("expected a number"),
        1
    );
    assert_eq!(
        res[1].lock().unwrap().string().expect("expected a string"),
        "2"
    );
    let inner_value = res[2].lock().unwrap();
    let inner_list = inner_value.list().expect("expected a list");
    assert_eq!(inner_list.len(), 2);
    assert_eq!(
        inner_list[0]
            .lock()
            .unwrap()
            .boolean()
            .expect("expected a bool"),
        false
    );
    assert_eq!(
        inner_list[1]
            .lock()
            .unwrap()
            .boolean()
            .expect("expected a bool"),
        true
    );
}
