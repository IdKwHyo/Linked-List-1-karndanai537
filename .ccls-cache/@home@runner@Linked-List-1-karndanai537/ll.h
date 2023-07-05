
void LL::insert_node(std::string n, int i) {
    // 1. Create a node
    nodePtr new_node = new node(i, n);

    // 2. Connect
    if (hol == NULL) {
        hol = new_node;
    } else {
        nodePtr t = hol;
        while (t->get_next() != NULL) {
            t = t->get_next();
        }
        t->set_next(new_node);
    }

    size++;
}
