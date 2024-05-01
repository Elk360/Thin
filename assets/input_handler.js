class InputHandler {
    constructor() {
        this.keys = {}; // Object to store the state of each key (pressed or not pressed)
        
        // Add event listeners for keydown and keyup events
        document.addEventListener('keydown', this.handleKeyDown.bind(this));
        document.addEventListener('keyup', this.handleKeyUp.bind(this));
    }

    handleKeyDown(event) {
        // Set the corresponding key in the keys object to true when pressed
        this.keys[event.key] = true;
        console.log(`Key down: ${event.key}`);
    }

    handleKeyUp(event) {
        // Set the corresponding key in the keys object to false when released
        this.keys[event.key] = false;
        console.log(`Key up: ${event.key}`);
    }

    isKeyPressed(key) {
        // Check if the specified key is currently pressed
        return !!this.keys[key];
    }
}
